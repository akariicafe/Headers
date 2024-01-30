@class NSArray;

@interface DocumentUnderstanding.DUUserInterfaceUnderstandingResponse : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ foundEntities;
}

@property (nonatomic, copy) NSArray *foundEntities;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;

@end
