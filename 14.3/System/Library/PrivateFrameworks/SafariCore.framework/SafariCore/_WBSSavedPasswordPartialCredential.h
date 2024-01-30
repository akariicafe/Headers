@class NSData, NSURLProtectionSpace, NSDate;

@interface _WBSSavedPasswordPartialCredential : NSObject

@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSData *persistentIdentifier;

- (void).cxx_destruct;
- (id)initWithProtectionSpace:(id)a0 date:(id)a1 persistentIdentifier:(id)a2;

@end
