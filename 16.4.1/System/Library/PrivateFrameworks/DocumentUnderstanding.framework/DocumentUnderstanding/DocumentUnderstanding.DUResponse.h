@interface DocumentUnderstanding.DUResponse : NSObject <NSCoding, NSCopying>

@property (nonatomic, retain) void /* unknown type, empty encoding */ topics;
@property (nonatomic, retain) void /* unknown type, empty encoding */ structuredEntities;
@property (nonatomic, retain) void /* unknown type, empty encoding */ languageTags;
@property (nonatomic, retain) void /* unknown type, empty encoding */ productCategories;
@property (nonatomic, retain) void /* unknown type, empty encoding */ userInterfaceUnderstandingResults;
@property (nonatomic, retain) void /* unknown type, empty encoding */ documentCategories;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;

@end
