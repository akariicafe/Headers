@class NSString, NSURL;

@interface CalMockCalendarDataContainerInfo : NSObject <CalCalendarDataContainerInfo>

@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSString *personaID;
@property (retain, nonatomic) NSURL *containerURL;
@property (nonatomic) BOOL usesDataSeparatedContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
