@interface BKMatchEvent : NSObject

@property (nonatomic) BOOL result;
@property (nonatomic) unsigned long long timeStamp;

+ (id)matchEventWithDictionary:(id)a0 error:(id *)a1;

@end
