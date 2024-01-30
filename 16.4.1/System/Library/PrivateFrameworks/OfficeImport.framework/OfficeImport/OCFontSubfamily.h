@class NSString, OCFontMetadata;

@interface OCFontSubfamily : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) OCFontMetadata *metadata;

+ (id)fontSubfamilyWithName:(id)a0 metadata:(id)a1;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 metadata:(id)a1;

@end
