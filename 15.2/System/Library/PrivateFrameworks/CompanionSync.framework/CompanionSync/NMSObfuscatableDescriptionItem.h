@class NSString;
@protocol NSObject;

@interface NMSObfuscatableDescriptionItem : NSObject

@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) id<NSObject> value;
@property (nonatomic) BOOL obfuscated;

- (void).cxx_destruct;
- (id)initWithFormat:(id)a0 value:(id)a1 obfuscated:(BOOL)a2;

@end
