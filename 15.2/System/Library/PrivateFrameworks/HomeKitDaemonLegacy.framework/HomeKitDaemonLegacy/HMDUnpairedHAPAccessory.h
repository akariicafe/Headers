@class NSArray, NSData, NSMutableArray;

@interface HMDUnpairedHAPAccessory : HMDUnassociatedAccessory {
    NSMutableArray *_accessoryServers;
}

@property (readonly, copy) NSArray *accessoryServers;
@property (readonly, nonatomic) unsigned long long transportTypes;
@property (nonatomic) long long certificationStatus;
@property (retain, nonatomic) NSData *setupHash;
@property (readonly, nonatomic) long long linkType;

- (BOOL)isReachable;
- (id)dumpDescription;
- (void).cxx_destruct;
- (long long)associationOptions;
- (void)identifyWithCompletionHandler:(id /* block */)a0;
- (BOOL)hasBTLELink;
- (id)preferredAccessoryServer;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 messageDispatcher:(id)a3;
- (id)descriptionWithPointer:(BOOL)a0 additionalDescription:(id)a1;
- (BOOL)hasIPLink;
- (void)removeAccessoryServer:(id)a0;
- (void)addAccessoryServer:(id)a0;
- (id)initWithAccessoryServer:(id)a0 messageDispatcher:(id)a1;

@end
