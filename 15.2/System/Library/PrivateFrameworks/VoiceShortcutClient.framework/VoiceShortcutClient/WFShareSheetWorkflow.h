@class NSString;

@interface WFShareSheetWorkflow : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned short glyphCharacter;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGImage { } *iconImage;
@property (readonly, nonatomic) double iconScale;

- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 glyphCharacter:(unsigned short)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)setIconImage:(struct CGImage { } *)a0 scale:(double)a1;

@end
