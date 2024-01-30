@class NSArray, NSData, NSMutableArray;

@interface HMDUnpairedHAPAccessory : HMDUnassociatedAccessory {
    NSMutableArray *_accessoryServers;
}

@property (readonly, copy) NSArray *accessoryServers;
@property (readonly, nonatomic) unsigned long long transportTypes;
@property (nonatomic) long long certificationStatus;
@property (retain, nonatomic) NSData *setupHash;
@property (readonly, nonatomic) long long awd_linkType;

- (BOOL)isReachable;
- (long long)associationOptions;
- (void)identifyWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)hasBTLELink;
- (id)preferredAccessoryServer;
- (BOOL)hasIPLink;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 messageDispatcher:(id)a3;
- (id)descriptionWithPointer:(BOOL)a0 additionalDescription:(id)a1;
- (id)dumpDescription;
- (id)initWithAccessoryServer:(id)a0 messageDispatcher:(id)a1;
- (void)addAccessoryServer:(id)a0;
- (void)removeAccessoryServer:(id)a0;

@end
