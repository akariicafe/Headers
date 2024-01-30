@class NSString, NSArray, SiriCoreSQLiteStatement;
@protocol SiriCoreSQLiteRecordBuilder;

@interface SiriCoreSQLiteQuery : NSObject

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) SiriCoreSQLiteStatement *statement;
@property (readonly, copy, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) id<SiriCoreSQLiteRecordBuilder> recordBuilder;
@property (readonly, nonatomic) unsigned long long options;

- (id)initWithString:(id)a0 statement:(id)a1 parameters:(id)a2 recordBuilder:(id)a3 options:(unsigned long long)a4;
- (id)description;
- (void).cxx_destruct;

@end
