@interface BWNodeStillImageReferenceFrameBracketedCaptureSequenceNumberMessage : BWNodeMessage {
    int _referenceFrameBracketedCaptureSequenceNumber;
}

@property (readonly) int referenceFrameBracketedCaptureSequenceNumber;

+ (id)newMessageWithStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0;

- (id)_initWithStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0;

@end
