@class NSArray;

@interface DocumentUnderstanding.DULanguageTaggingResponse : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ languageTags;
}

@property (nonatomic, copy) NSArray *languageTags;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;

@end
