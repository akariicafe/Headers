@class NSString;

@interface _MPSectionedIdentifierListProxyEntry : NSObject <MPSectionedIdentifierListEnumerationResult>

@property (readonly, nonatomic) long long branchDepth;
@property (readonly, nonatomic) long long entryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)endEntry;
+ (id)startEntry;

- (id)itemResult;
- (id)trackingEntryResult;

@end
