@class NSData;

@interface PLBasebandEurekaLogMessage : PLBasebandMessage

@property struct _PLBasebandLogHeader { struct _PLBasebandMessageHeader { unsigned char x0; } x0; unsigned short x1; unsigned short x2; unsigned char x3[8]; } *header;
@property (retain) NSData *payload;
@property (readonly) unsigned int eventCode;

- (void)logWithLogger:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)payloadString;
- (void)parseData:(id)a0;
- (id)tooShortErrorString;
- (id)stringForUnknownBytes:(unsigned int)a0;

@end
