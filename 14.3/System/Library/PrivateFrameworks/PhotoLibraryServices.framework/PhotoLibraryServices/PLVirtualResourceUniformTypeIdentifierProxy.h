@class NSString;
@protocol PLUniformTypeIdentifierIdentity;

@interface PLVirtualResourceUniformTypeIdentifierProxy : NSObject

@property (retain, nonatomic) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentiferID;
@property (readonly, nonatomic) BOOL conformsToImage;
@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithUniformTypeIdentiferID:(id)a0;

@end
