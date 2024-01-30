@class NSString, NSArray;

@interface _LTTranslationSense : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isPhrasebookMatch) BOOL phrasebookMatch;
@property (copy, nonatomic) NSString *senseID;
@property (copy, nonatomic) NSString *definition;
@property (copy, nonatomic) NSString *sourceMatch;
@property (copy, nonatomic) NSString *targetMatch;
@property (copy, nonatomic) NSArray *labels;

+ (id)senseFromDictionary:(id)a0;
+ (id)senseWithPhrasebookMatchMeta:(id)a0;
+ (id)sensesFromArray:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonRepresentation;
- (void).cxx_destruct;

@end
