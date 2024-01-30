@class NSArray, NSString, MCMError;

@interface MCMResultWithLinksArrayBase : MCMResultBase <MCMResultWithLinksArray>

@property (readonly, nonatomic) NSArray *resolvedLinks;
@property (readonly, nonatomic) MCMError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
