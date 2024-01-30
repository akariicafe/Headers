@class NSUUID, NSString, NSData, CLKComplicationDescriptor, NSNumber;

@interface NTKDSyncMessage : NSObject <SYChange, NSSecureCoding> {
    NSUUID *_uuid;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long messageType;
@property (retain, nonatomic) NSUUID *faceUUID;
@property (copy, nonatomic) NSData *payloadData;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSString *complicationClientID;
@property (copy, nonatomic) CLKComplicationDescriptor *complicationDescriptor;
@property (copy, nonatomic) NSNumber *complicationFamily;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly, nonatomic) long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageOfType:(long long)a0;
+ (id)messageTypeDescription:(long long)a0;
+ (id)colorSyncMessageWithData:(id)a0 domain:(id)a1;
+ (id)messageOfType:(long long)a0 withFaceUUID:(id)a1;
+ (id)messageOfType:(long long)a0 withComplicationClientId:(id)a1;
+ (id)messageOfType:(long long)a0 withComplicationCliendId:(id)a1 descriptor:(id)a2 family:(id)a3;

@end
