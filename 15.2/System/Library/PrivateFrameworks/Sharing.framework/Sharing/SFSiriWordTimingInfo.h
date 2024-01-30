@class NSString;

@interface SFSiriWordTimingInfo : NSObject

@property (copy, nonatomic) NSString *localizedText;
@property (nonatomic) double timeOffset;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (copy, nonatomic) NSString *wordID;

+ (id)timingInfoArrayWithSerializableArray:(id)a0;
+ (id)serializableArrayWithTimingInfoArray:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionary;

@end
