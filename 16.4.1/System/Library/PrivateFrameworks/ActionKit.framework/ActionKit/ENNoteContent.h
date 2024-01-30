@class NSString;

@interface ENNoteContent : NSObject

@property (copy, nonatomic) NSString *emml;

+ (id)noteContentWithContentArray:(id)a0;
+ (id)noteContentWithENML:(id)a0;
+ (id)noteContentWithSanitizedHTML:(id)a0;
+ (id)noteContentWithString:(id)a0;

- (void).cxx_destruct;
- (id)enml;
- (id)enmlWithNote:(id)a0;
- (id)initWithENML:(id)a0;

@end
