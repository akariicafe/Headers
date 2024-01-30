@class VCSEntity, NSMutableArray, VCSCalendar;

@interface VCSParseState : NSObject

@property (nonatomic) unsigned long long context;
@property (nonatomic) long long version;
@property (nonatomic) int lineNumber;
@property (nonatomic) BOOL palmImport;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) VCSCalendar *currentCalendar;
@property (retain, nonatomic) VCSEntity *currentEntity;
@property (retain, nonatomic) NSMutableArray *calendars;

- (id)init;
- (void).cxx_destruct;
- (void)setVersionMaj:(int)a0 andMin:(int)a1;

@end
