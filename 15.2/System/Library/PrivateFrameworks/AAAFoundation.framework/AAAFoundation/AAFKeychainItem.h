@class NSData, AAFKeychainItemDescriptor;

@interface AAFKeychainItem : NSObject

@property (copy, nonatomic) NSData *value;
@property (retain, nonatomic) AAFKeychainItemDescriptor *descriptor;

- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0;
- (id)itemAttributes;
- (id)initWithDescriptor:(id)a0 value:(id)a1;

@end
