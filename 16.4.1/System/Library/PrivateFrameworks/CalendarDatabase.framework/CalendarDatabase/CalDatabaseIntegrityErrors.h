@class NSCountedSet;
@protocol CalCalendarDatabaseIntegrityErrorReportingDelegate;

@interface CalDatabaseIntegrityErrors : NSObject

@property (readonly, nonatomic) NSCountedSet *errors;
@property (retain, nonatomic) id<CalCalendarDatabaseIntegrityErrorReportingDelegate> delegate;

- (id)init;
- (void).cxx_destruct;

@end
