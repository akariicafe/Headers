@class NSString, NSObject;
@protocol OS_os_log;

@interface TVRCLogBuilder : NSObject

@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSObject<OS_os_log> *logger;

- (void).cxx_destruct;
- (id)_dataSetFromArray:(id)a0;
- (id)_templateForDataSetData:(id)a0;
- (id)initWithContext:(id)a0 name:(id)a1;
- (id)jsonForArray:(id)a0;
- (id)jsonForDictionary:(id)a0;
- (id)jsonForError:(id)a0;

@end
