@class NSString;

@interface MPCItemIdentifierImplementation : NSObject <MPCItemIdentifier, NSCopying>

@property (copy, nonatomic) NSString *contentItemID;
@property (nonatomic) long long repeatIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierForMFQueuePlayerItem:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithContentItemID:(id)a0 repeatIndex:(long long)a1;

@end
