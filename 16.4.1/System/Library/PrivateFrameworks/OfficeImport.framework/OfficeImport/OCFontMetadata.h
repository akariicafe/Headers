@class OCFontSig, OCFontPanose1, NSArray;

@interface OCFontMetadata : NSObject

@property (readonly, nonatomic) OCFontSig *sig;
@property (readonly, nonatomic) int charSet;
@property (readonly, nonatomic) OCFontPanose1 *panose1;
@property (readonly, nonatomic) int pitch;
@property (readonly, nonatomic) int genericFamily;
@property (readonly, nonatomic) NSArray *altNames;

+ (id)fontMetadataWithSig:(id)a0 charSet:(int)a1 panose1:(id)a2 pitch:(int)a3 genericFamily:(int)a4 altNames:(id)a5;

- (void).cxx_destruct;
- (id)initWithSig:(id)a0 charSet:(int)a1 panose1:(id)a2 pitch:(int)a3 genericFamily:(int)a4 altNames:(id)a5;

@end
