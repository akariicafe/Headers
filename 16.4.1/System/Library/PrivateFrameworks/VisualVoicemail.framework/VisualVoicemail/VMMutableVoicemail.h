@class NSString, NSURL, NSDate;

@interface VMMutableVoicemail : VMVoicemail

@property (copy, nonatomic) NSString *callbackDestinationID;
@property (copy, nonatomic) NSString *callbackISOCountryCode;
@property (retain, nonatomic) NSURL *dataURL;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic, getter=isRead) BOOL read;
@property (nonatomic) unsigned long long remoteUID;
@property (copy, nonatomic) NSString *receiverDestinationID;
@property (copy, nonatomic) NSString *receiverLabelID;
@property (copy, nonatomic) NSString *receiverISOCountryCode;
@property (copy, nonatomic) NSString *senderDestinationID;
@property (copy, nonatomic) NSString *senderISOCountryCode;
@property (retain, nonatomic) NSURL *transcriptionURL;
@property (nonatomic, getter=isTrashed) BOOL trashed;


@end
