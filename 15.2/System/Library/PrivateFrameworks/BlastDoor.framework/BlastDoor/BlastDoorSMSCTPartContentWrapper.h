@class NSString, BlastDoorSMSCTPartPlain, BlastDoorSMSCTPartAttachment, BlastDoorSMSCTPartSMIL;

@interface BlastDoorSMSCTPartContentWrapper : NSObject {
    void /* unknown type, empty encoding */ sMSCTPart_Content;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BlastDoorSMSCTPartPlain *plain;
@property (nonatomic, readonly) BlastDoorSMSCTPartSMIL *smil;
@property (nonatomic, readonly) BlastDoorSMSCTPartAttachment *attachment;

- (void).cxx_destruct;
- (id)init;

@end
