@class NSString;

@interface _DPToolArguments : NSObject

@property (readonly, copy, nonatomic) NSString *command;
@property (readonly, copy, nonatomic) NSString *arguments;
@property (readonly, copy, nonatomic) NSString *metadata;
@property (readonly, copy, nonatomic) NSString *recordKey;
@property (readonly, nonatomic) BOOL verbose;
@property (readonly, copy, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) BOOL writeOK;

+ (id)usage;

- (id)job;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
