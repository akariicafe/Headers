@class NSOperation, NSMutableSet;
@protocol WBSSiteMetadataProvider;

@interface _WBSSiteMetadataRequestInfo : NSObject

@property (readonly, nonatomic) id<WBSSiteMetadataProvider> provider;
@property (readonly, nonatomic) NSMutableSet *tokens;
@property (weak, nonatomic) NSOperation *operation;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithProvider:(id)a0;

@end
