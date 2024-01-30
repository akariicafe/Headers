@interface BWNodeStillImageReferenceFrameBracketedCaptureSequenceNumberMessage : BWNodeMessage {
    int _referenceFrameBracketedCaptureSequenceNumber;
}

@property (readonly) int referenceFrameBracketedCaptureSequenceNumber;

+ (id)newMessageWithStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0;

@end
