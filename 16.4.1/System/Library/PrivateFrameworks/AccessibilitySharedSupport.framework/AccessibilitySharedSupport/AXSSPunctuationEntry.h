@class NSString, NSUUID, NSData, NSDate, NSDictionary;

@interface AXSSPunctuationEntry : NSObject <NSCopying>

@property (retain, nonatomic) NSString *punctuation;
@property (retain, nonatomic) NSString *replacement;
@property (nonatomic) long long rule;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSUUID *groupUUID;
@property (nonatomic) unsigned short version;
@property (nonatomic) BOOL inCloud;
@property (retain, nonatomic) NSString *ckChangeTag;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSDate *ckRecordProcessDate;
@property (readonly, nonatomic) NSData *jsonRepresentation;
@property (readonly, nonatomic) NSDictionary *jsonDictionary;

+ (id)punctuationEntryFromJSONDictionary:(id)a0;
+ (id)punctuationEntryFromJSONRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
