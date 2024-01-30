@class NSOperation, NSMutableSet;
@protocol WBSSiteMetadataProvider;

@interface _WBSSiteMetadataRequestInfo : NSObject

@property (readonly, nonatomic) id<WBSSiteMetadataProvider> provider;
@property (readonly, nonatomic) NSMutableSet *tokens;
@property (weak, nonatomic) NSOperation *operation;

- (id)initWithProvider:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
