@class NMSSHSession;

@interface NMSFTP : NSObject

@property (retain, nonatomic) NMSSHSession *session;
@property (nonatomic) struct _LIBSSH2_SFTP { } *sftpSession;
@property (nonatomic, getter=isConnected) BOOL connected;

+ (id)connectWithSession:(id)a0;

- (BOOL)connect;
- (BOOL)fileExistsAtPath:(id)a0;
- (id)initWithSession:(id)a0;
- (void)disconnect;
- (id)contentsAtPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)removeFileAtPath:(id)a0;
- (BOOL)directoryExistsAtPath:(id)a0;
- (BOOL)moveItemAtPath:(id)a0 toPath:(id)a1;
- (struct _LIBSSH2_SFTP_HANDLE { } *)openDirectoryAtPath:(id)a0;
- (BOOL)createDirectoryAtPath:(id)a0;
- (BOOL)removeDirectoryAtPath:(id)a0;
- (id)contentsOfDirectoryAtPath:(id)a0;
- (id)infoForFileAtPath:(id)a0;
- (struct _LIBSSH2_SFTP_HANDLE { } *)openFileAtPath:(id)a0 flags:(unsigned long long)a1 mode:(long long)a2;
- (BOOL)createSymbolicLinkAtPath:(id)a0 withDestinationPath:(id)a1;
- (id)contentsAtPath:(id)a0 progress:(id /* block */)a1;
- (BOOL)writeContents:(id)a0 toFileAtPath:(id)a1;
- (BOOL)writeContents:(id)a0 toFileAtPath:(id)a1 progress:(id /* block */)a2;
- (BOOL)writeFileAtPath:(id)a0 toFileAtPath:(id)a1;
- (BOOL)writeFileAtPath:(id)a0 toFileAtPath:(id)a1 progress:(id /* block */)a2;
- (BOOL)writeStream:(id)a0 toFileAtPath:(id)a1;
- (BOOL)writeStream:(id)a0 toFileAtPath:(id)a1 progress:(id /* block */)a2;
- (BOOL)appendContents:(id)a0 toFileAtPath:(id)a1;
- (BOOL)appendStream:(id)a0 toFileAtPath:(id)a1;
- (BOOL)writeStream:(id)a0 toSFTPHandle:(struct _LIBSSH2_SFTP_HANDLE { } *)a1;
- (BOOL)writeStream:(id)a0 toSFTPHandle:(struct _LIBSSH2_SFTP_HANDLE { } *)a1 progress:(id /* block */)a2;
- (BOOL)copyContentsOfPath:(id)a0 toFileAtPath:(id)a1 progress:(id /* block */)a2;

@end
