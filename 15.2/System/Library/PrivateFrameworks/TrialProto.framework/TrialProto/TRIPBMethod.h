@class NSString, NSMutableArray;

@interface TRIPBMethod : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *requestTypeURL;
@property (nonatomic) BOOL requestStreaming;
@property (copy, nonatomic) NSString *responseTypeURL;
@property (nonatomic) BOOL responseStreaming;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) unsigned long long optionsArray_Count;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end
