@class ML3MusicLibrary, NSOutputStream;

@interface ML3ExportSession : NSData

@property (readonly, nonatomic) ML3MusicLibrary *library;
@property (readonly, nonatomic) NSOutputStream *outputStream;

- (id)end;
- (void).cxx_destruct;
- (id)begin:(unsigned int)a0;
- (id)exportPlaylistAdded:(unsigned long long)a0;
- (id)exportPlaylistDeleted:(unsigned long long)a0;
- (id)exportTrackAdded:(unsigned long long)a0;
- (id)exportTrackDeleted:(unsigned long long)a0;
- (id)exportTrackUpdated:(unsigned long long)a0;
- (id)initWithLibrary:(id)a0 outputStream:(id)a1;

@end
