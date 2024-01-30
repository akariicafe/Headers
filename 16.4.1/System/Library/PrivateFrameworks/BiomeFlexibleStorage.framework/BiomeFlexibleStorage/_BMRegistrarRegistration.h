@class NSString, NSURL, NSDate;

@interface _BMRegistrarRegistration : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSURL *databaseURL;
@property (retain, nonatomic) NSString *sourceStreamID;
@property (retain, nonatomic) NSDate *registrationDate;
@property (retain, nonatomic) NSDate *lastCommunicationDate;

- (void).cxx_destruct;

@end
