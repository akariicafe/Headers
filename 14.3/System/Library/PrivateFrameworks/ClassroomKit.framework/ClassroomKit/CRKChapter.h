@class NSString, NSArray, NSURL, NSDictionary;

@interface CRKChapter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *subchapters;
@property (retain, nonatomic) NSURL *webURL;
@property (readonly, copy, nonatomic) NSDictionary *JSONRepresentation;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
