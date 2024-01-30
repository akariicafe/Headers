@class NSString, NSArray, NSURL, NSDate;

@interface DocumentUnderstanding.DUDocument : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ headline;
    void /* unknown type, empty encoding */ subHeadline;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ creator;
    void /* unknown type, empty encoding */ abstract;
    void /* unknown type, empty encoding */ comment;
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ inLanguage;
    void /* unknown type, empty encoding */ keywords;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ thumbnailUrl;
    void /* unknown type, empty encoding */ significantLink;
    void /* unknown type, empty encoding */ dateCreated;
    void /* unknown type, empty encoding */ dateModified;
    void /* unknown type, empty encoding */ documentUIElements;
}

@property (nonatomic, copy) NSString *headline;
@property (nonatomic, copy) NSString *subHeadline;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSString *creator;
@property (nonatomic, copy) NSString *abstract;
@property (nonatomic, copy) NSString *comment;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *inLanguage;
@property (nonatomic, copy) NSArray *keywords;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, copy) NSURL *thumbnailUrl;
@property (nonatomic, copy) NSURL *significantLink;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSDate *dateModified;
@property (nonatomic, copy) NSArray *documentUIElements;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
