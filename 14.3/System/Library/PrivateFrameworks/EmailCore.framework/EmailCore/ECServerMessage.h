@class NSString, ECMessageFlags, NSSet, NSNumber;

@interface ECServerMessage : NSObject <ECServerMessageBuilder, ECIMAPServerMessageBuilder, NSCopying> {
    NSNumber *_imapUID;
}

@property (retain, nonatomic) NSString *persistentID;
@property (retain, nonatomic) NSString *messagePersistentID;
@property (retain, nonatomic) ECMessageFlags *serverFlags;
@property (copy, nonatomic) NSString *remoteID;
@property (copy, nonatomic) NSSet *labels;
@property (readonly, nonatomic) id remoteIDObject;
@property (readonly, nonatomic) unsigned int imapUID;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithServerMessageBuilder:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)setImapUID:(unsigned int)a0;
- (id)initWithIMAPServerMessageBuilder:(id /* block */)a0;

@end
