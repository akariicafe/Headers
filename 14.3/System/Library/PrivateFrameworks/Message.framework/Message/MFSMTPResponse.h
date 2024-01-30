@class NSString, NSArray;

@interface MFSMTPResponse : NSObject <NSCopying> {
    id _lastResponseLine;
}

@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) unsigned short statusClass : 10;
@property (readonly, nonatomic) unsigned short statusSubject : 10;
@property (readonly, nonatomic) unsigned short statusDetail : 10;
@property (readonly, nonatomic) NSString *statusString;
@property (retain, nonatomic) NSArray *continuationResponses;

- (id)initWithStatus:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStatus:(int)a0;
- (id)description;
- (int)failureReason;
- (id)lastResponseLine;
- (id)errorMessageWithAddress:(id)a0 defaultMessage:(id)a1;
- (void)setLastResponseLine:(id)a0;
- (void)_updateEnhancedStatusCodesFromLastResponse;

@end
