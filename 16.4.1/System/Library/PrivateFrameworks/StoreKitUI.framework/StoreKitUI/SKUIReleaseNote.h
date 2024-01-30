@class NSString, NSDate;

@interface SKUIReleaseNote : NSObject

@property (readonly, nonatomic) NSString *changeNotes;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *versionString;

+ (id)dateFormatter;

- (void).cxx_destruct;
- (id)initWithReleaseNoteDictionary:(id)a0 dateFormatter:(id)a1;

@end
