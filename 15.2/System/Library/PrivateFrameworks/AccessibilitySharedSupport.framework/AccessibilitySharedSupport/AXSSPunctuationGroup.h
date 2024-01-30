@class NSDictionary, NSUUID, NSString, NSArray, NSSet, NSDate, NSData;

@interface AXSSPunctuationGroup : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *entries;
@property (retain, nonatomic) NSSet *autoSwitchContexts;
@property (retain, nonatomic) NSUUID *basePunctuationUUID;
@property (nonatomic) unsigned short version;
@property (nonatomic) BOOL inCloud;
@property (retain, nonatomic) NSString *ckChangeTag;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSDate *ckRecordProcessDate;
@property (nonatomic) BOOL inDatabase;
@property (readonly, nonatomic) BOOL isSystemPunctuationGroup;
@property (readonly, nonatomic) NSData *jsonRepresentation;
@property (readonly, nonatomic) NSDictionary *jsonDictionary;

+ (id)punctuationGroupFromJSONRepresentation:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
