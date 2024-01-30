@class NSMutableDictionary;

@interface GPBStruct : GPBMessage

@property (retain, nonatomic) NSMutableDictionary *fields;
@property (readonly, nonatomic) unsigned long long fields_Count;

+ (id)descriptor;

@end
