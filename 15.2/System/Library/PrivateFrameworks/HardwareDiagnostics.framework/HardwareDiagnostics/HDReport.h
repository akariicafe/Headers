@class NSArray, NSDictionary, NSMutableDictionary, NSDate, NSError, NSMutableArray;

@interface HDReport : NSObject <NSSecureCoding, NSCopying> {
    NSMutableArray *_results;
    NSMutableDictionary *_files;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *startTime;
@property (copy, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSDictionary *files;
@property (copy, nonatomic) NSDictionary *auxiliaryData;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long status;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addResult:(id)a0;
- (void)addFile:(id)a0 forName:(id)a1;
- (void)failedForError:(id)a0;
- (BOOL)attemptToSetPassed;

@end
