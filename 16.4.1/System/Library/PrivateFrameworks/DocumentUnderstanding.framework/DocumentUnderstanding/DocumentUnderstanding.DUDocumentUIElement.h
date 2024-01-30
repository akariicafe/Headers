@class NSString, NSArray;

@interface DocumentUnderstanding.DUDocumentUIElement : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ classDescriptor;
    void /* unknown type, empty encoding */ superviewClassNames;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSString *classDescriptor;
@property (nonatomic) void /* unknown type, empty encoding */ fontSize;
@property (nonatomic, copy) NSArray *superviewClassNames;
@property (nonatomic) void /* unknown type, empty encoding */ frameInWindow;
@property (nonatomic) void /* unknown type, empty encoding */ absoluteOriginOnScreen;
@property (nonatomic) void /* unknown type, empty encoding */ isOnScreen;
@property (nonatomic) void /* unknown type, empty encoding */ isValidForContentExtraction;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
