@class NSData, NSURL;

@interface SLFetchShareableContentActionResponse : SLShareableContentActionResponse

@property (retain, nonatomic) NSData *dataRepresentation;
@property (retain, nonatomic) NSURL *inPlaceFileURL;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)responseWithDataRepresentation:(id)a0;
+ (id)responseWithInPlaceFileURL:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;

@end
