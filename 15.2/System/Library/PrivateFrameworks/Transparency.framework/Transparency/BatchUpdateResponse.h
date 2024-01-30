@class NSString, NSMutableArray;

@interface BatchUpdateResponse : GPBMessage

@property (nonatomic) int status;
@property (copy, nonatomic) NSString *serverEventInfo;
@property (retain, nonatomic) NSMutableArray *responsesArray;
@property (readonly, nonatomic) unsigned long long responsesArray_Count;

+ (id)descriptor;

@end
