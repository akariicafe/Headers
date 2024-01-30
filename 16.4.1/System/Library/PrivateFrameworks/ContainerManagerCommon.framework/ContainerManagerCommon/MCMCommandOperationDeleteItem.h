@class NSURL;
@protocol MCMMetadata;

@interface MCMCommandOperationDeleteItem : NSObject

@property (readonly, nonatomic) id<MCMMetadata> metadata;
@property (readonly, nonatomic) BOOL removeCodesignInfo;
@property (retain, nonatomic) NSURL *manifestURL;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 removeCodesignInfo:(BOOL)a1 manifestURL:(id)a2;

@end
