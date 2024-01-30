@class NSString, NSData, NSURL;

@interface _SFReaderExtractedData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *author;
@property (readonly, copy, nonatomic) NSString *publishedDate;
@property (readonly, nonatomic) NSData *body;
@property (readonly, nonatomic) NSURL *mainImageURL;
@property (readonly, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithAuthor:(id)a0 body:(id)a1 publishedDate:(id)a2 title:(id)a3 mainImageURL:(id)a4 url:(id)a5;
- (id)initWithReaderContent:(id)a0 url:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
