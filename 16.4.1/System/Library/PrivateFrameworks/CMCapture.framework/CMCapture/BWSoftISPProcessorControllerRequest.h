@interface BWSoftISPProcessorControllerRequest : BWStillImageProcessorControllerRequest {
    unsigned long long _uniqueID;
}

@property (readonly, nonatomic) unsigned long long uniqueID;

- (void)dealloc;
- (id)description;
- (id)initWithInput:(id)a0 delegate:(id)a1;
- (BOOL)readyForProcessing;

@end
