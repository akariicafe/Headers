@class NSArray;

@interface DocumentUnderstanding.DUProductClassificationResponse : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ productCategories;
}

@property (nonatomic, copy) NSArray *productCategories;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;

@end
