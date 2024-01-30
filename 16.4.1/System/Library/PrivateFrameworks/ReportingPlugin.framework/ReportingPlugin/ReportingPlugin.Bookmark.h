@class NSData, NSString, _TtC15ReportingPlugin12StreamReader;

@interface ReportingPlugin.Bookmark : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *streamName;
@property (nonatomic, retain) _TtC15ReportingPlugin12StreamReader *streamReader;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
