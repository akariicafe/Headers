@interface HIDEvent : NSObject {
    struct { unsigned long long timeStamp; unsigned long long senderID; unsigned long long typeMask; unsigned int options; char *attributeData; void *context; struct __CFDictionary *attachments; void *sender; struct __CFArray *children; struct __IOHIDEvent *parent; long long attributeDataLength; long long eventCount; struct IOHIDEventData *eventData; } _event;
}

- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (id)description;
- (id)initWithSize:(unsigned long long)a0 type:(unsigned int)a1 timestamp:(unsigned long long)a2 options:(unsigned int)a3;

@end
